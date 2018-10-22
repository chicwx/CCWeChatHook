// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>
#import "FLEX.h"
#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelopParam.h"
#import "WBRedEnvelopParamQueue.h"

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end

%hook CustomViewController

+ (void)classMethod
{
	%log;

	%orig;
}

%new
-(void)newMethod:(NSString*) output{
    NSLog(@"This is a new method : %@", output);
}

%new
- (id)newProperty {
    return objc_getAssociatedObject(self, @selector(newProperty));
}

%new
- (void)setNewProperty:(id)value {
    objc_setAssociatedObject(self, @selector(newProperty), value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSString*)getMyName
{
	%log;
    
    NSString* password = MSHookIvar<NSString*>(self,"_password");
    
    NSLog(@"password:%@", password);
    
    [%c(CustomViewController) classMethod];
    
    [self newMethod:@"output"];
    
    self.newProperty = @"newProperty";
    
    NSLog(@"newProperty : %@", self.newProperty);

	return %orig();
}

%end


%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    NSLog(@"hook AppDelegate");
    [[FLEXManager sharedManager] setNetworkDebuggingEnabled:YES];

    [[FLEXManager sharedManager] showExplorer];


    %orig;

UIButton *flexButton = [[UIButton alloc] initWithFrame:CGRectMake([UIScreen mainScreen].bounds.size.width - 54, [UIScreen mainScreen].bounds.size.height - 154, 44, 44)];
flexButton.layer.shadowColor = [UIColor blackColor].CGColor;
[flexButton setImage:[UIImage imageNamed:@"debug_hammer"] forState:UIControlStateNormal];
[[UIApplication sharedApplication].keyWindow addSubview:flexButton];
[flexButton addTarget:self action:@selector(flexClick) forControlEvents:UIControlEventTouchUpInside];

}

%new
- (void)flexClick {
    [[FLEXManager sharedManager] showExplorer];
}
%end


//%hook CMessageMgr

//-(void)AsyncOnAddMsg:(id)message MsgWrap:(CMessageWrap* )msgWrap {
//    %log;
//    %orig;
//    if(msgWrap.m_uiMessageType == 49){
//        CContactMgr *contactManager = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
//        CContact *selfContact = [contactManager getSelfContact];
//
//        if ([msgWrap.m_nsContent rangeOfString:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao"].location != NSNotFound) { // 红包
//
//            NSString *nativeUrl = [[msgWrap m_oWCPayInfoItem] m_c2cNativeUrl];
//            nativeUrl = [nativeUrl substringFromIndex:[@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length]];
//
//            NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrl separator:@"&"];
//
//            NSMutableDictionary *args = [[%c(NSMutableDictionary) alloc] init];
//            [args setObject:nativeUrlDict[@"msgtype"] forKey:@"msgType"];
//            [args setObject:nativeUrlDict[@"sendid"] forKey:@"sendId"];
//            [args setObject:nativeUrlDict[@"channelid"] forKey:@"channelId"];
//            [args setObject:[selfContact getContactDisplayName] forKey:@"nickName"];
//            [args setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
//            [args setObject:nativeUrl forKey:@"nativeUrl"];
//            [args setObject:msgWrap.m_nsFromUsr forKey:@"sessionUserName"];
//
//            [[[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]] OpenRedEnvelopesRequest:args];
//        }
//    }
    
//    %orig;
//
//    switch(wrap.m_uiMessageType) {
//        case 49: { // AppNode
//
//            /** 是否为红包消息 */
//            BOOL (^isRedEnvelopMessage)() = ^BOOL() {
//                return [wrap.m_nsContent rangeOfString:@"wxpay://"].location != NSNotFound;
//            };
//
//            if (isRedEnvelopMessage()) { // 红包
//                CContactMgr *contactManager = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
//                CContact *selfContact = [contactManager getSelfContact];
//
//                BOOL (^isSender)() = ^BOOL() {
//                    return [wrap.m_nsFromUsr isEqualToString:selfContact.m_nsUsrName];
//                };
//
//                /** 是否别人在群聊中发消息 */
//                BOOL (^isGroupReceiver)() = ^BOOL() {
//                    return [wrap.m_nsFromUsr rangeOfString:@"@chatroom"].location != NSNotFound;
//                };
//
//                /** 是否自己在群聊中发消息 */
//                BOOL (^isGroupSender)() = ^BOOL() {
//                    return isSender() && [wrap.m_nsToUsr rangeOfString:@"chatroom"].location != NSNotFound;
//                };
//
//                NSDictionary *(^parseNativeUrl)(NSString *nativeUrl) = ^(NSString *nativeUrl) {
//                    nativeUrl = [nativeUrl substringFromIndex:[@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length]];
//                    return [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrl separator:@"&"];
//                };
//
//                /** 获取服务端验证参数 */
//                void (^queryRedEnvelopesReqeust)(NSDictionary *nativeUrlDict) = ^(NSDictionary *nativeUrlDict) {
//                    NSMutableDictionary *params = [@{} mutableCopy];
//                    params[@"agreeDuty"] = @"0";
//                    params[@"channelId"] = [nativeUrlDict stringForKey:@"channelid"];
//                    params[@"inWay"] = @"0";
//                    params[@"msgType"] = [nativeUrlDict stringForKey:@"msgtype"];
//                    params[@"nativeUrl"] = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
//                    params[@"sendId"] = [nativeUrlDict stringForKey:@"sendid"];
//
//                    WCRedEnvelopesLogicMgr *logicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("WCRedEnvelopesLogicMgr") class]];
//                    [logicMgr ReceiverQueryRedEnvelopesRequest:params];
//                };
//
//                /** 储存参数 */
//                void (^enqueueParam)(NSDictionary *nativeUrlDict) = ^(NSDictionary *nativeUrlDict) {
//                    WeChatRedEnvelopParam *mgrParams = [[WeChatRedEnvelopParam alloc] init];
//                    mgrParams.msgType = [nativeUrlDict stringForKey:@"msgtype"];
//                    mgrParams.sendId = [nativeUrlDict stringForKey:@"sendid"];
//                    mgrParams.channelId = [nativeUrlDict stringForKey:@"channelid"];
//                    mgrParams.nickName = [selfContact getContactDisplayName];
//                    mgrParams.headImg = [selfContact m_nsHeadImgUrl];
//                    mgrParams.nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
//                    mgrParams.sessionUserName = isGroupSender() ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
//                    mgrParams.sign = [nativeUrlDict stringForKey:@"sign"];
//
//                    mgrParams.isGroupSender = isGroupSender();
//
//                    [[WBRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
//                };
//
//                NSString *nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
//                NSDictionary *nativeUrlDict = parseNativeUrl(nativeUrl);
//
//                queryRedEnvelopesReqeust(nativeUrlDict);
//                enqueueParam(nativeUrlDict);
//            }
//            break;
//        }
//        default:
//            break;
//    }
//}

//%end

//%hook WCRedEnvelopesLogicMgr
//
//- (void)ReceiverQueryRedEnvelopesRequest:(id)arg {
//    %log;
//    %orig;
//}
//
//%end
//
//%hook WBRedEnvelopParamQueue
//
//- (void)enqueue:(WeChatRedEnvelopParam *)param {
//    %log;
//    %orig;
//}
//
//%end

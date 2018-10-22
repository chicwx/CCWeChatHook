//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSXMLParser, WCSVGStyledPathFactory;

@interface WCSVGParser : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *_paths;
    NSXMLParser *_xmlParser;
    WCSVGStyledPathFactory *_pathFactory;
    unsigned long long _groupLevel;
    NSMutableDictionary *_groupTransforms;
    NSMutableDictionary *_groupAppearances;
    struct CGRect _viewBox;
}

@property(retain, nonatomic) NSMutableDictionary *groupAppearances; // @synthesize groupAppearances=_groupAppearances;
@property(retain, nonatomic) NSMutableDictionary *groupTransforms; // @synthesize groupTransforms=_groupTransforms;
@property unsigned long long groupLevel; // @synthesize groupLevel=_groupLevel;
@property(retain, nonatomic) WCSVGStyledPathFactory *pathFactory; // @synthesize pathFactory=_pathFactory;
@property(retain, nonatomic) NSXMLParser *xmlParser; // @synthesize xmlParser=_xmlParser;
@property(nonatomic) struct CGRect viewBox; // @synthesize viewBox=_viewBox;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (_Bool)parseSVGDocument;
- (id)initWithSVGData:(id)arg1;
- (id)initWithSVGDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

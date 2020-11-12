//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAAppRedirectProtocol-Protocol.h>

@class GWA2AppRedirectData, GWA2PageContext, NSMutableDictionary;

@interface GWA2DataManager : NSObject <GWAAppRedirectProtocol>
{
    GWA2PageContext *_pageContext;
    NSMutableDictionary *_dataMap;
    GWA2AppRedirectData *_activeAppRedirectData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWA2AppRedirectData *activeAppRedirectData; // @synthesize activeAppRedirectData=_activeAppRedirectData;
- (_Bool)handleIncomingURL:(id)arg1;
- (id)extensionFieldNumberToDataClassDictionary;
- (id)dataObjectFromProto:(id)arg1;
- (void)pageDidUpdate;
- (id)allData;
- (id)dataObjectWithReference:(long long)arg1;
- (void)replaceDataValueFromArray:(id)arg1 preservingExtension:(_Bool)arg2;
- (void)updateDataFromArray:(id)arg1;
- (void)removeDataFromArray:(id)arg1;
- (void)addDataFromArray:(id)arg1;
- (id)initWithPageContext:(id)arg1;

@end

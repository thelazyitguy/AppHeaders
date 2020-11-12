//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASKJSONParserStrategy-Protocol.h"

@class NSArray, NSEnumerator, NSMutableDictionary, NSString;

@interface ASKPluginJSONParser : NSObject <ASKJSONParserStrategy>
{
    NSEnumerator *_currentPluginIterator;
    NSMutableDictionary *_builders;
    NSArray *_plugins;
}

@property(retain, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) NSMutableDictionary *builders; // @synthesize builders=_builders;
@property(retain, nonatomic) NSEnumerator *currentPluginIterator; // @synthesize currentPluginIterator=_currentPluginIterator;
- (void).cxx_destruct;
- (id)buildExtensionPoints;
- (id)createOrGetExtensionPointBuilder:(id)arg1;
- (void)addExtensionPoint:(id)arg1;
- (void)addExtensionToCorrespondingBuilder:(id)arg1;
- (id)createExtensionPointsFromJson;
- (id)initWithJSON:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

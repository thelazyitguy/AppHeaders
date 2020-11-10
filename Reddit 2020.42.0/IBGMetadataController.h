//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGSnapshot, NSArray, NSDictionary;

@interface IBGMetadataController : NSObject
{
    IBGSnapshot *_snapshot;
    NSDictionary *_metadataParams;
    NSArray *_sortedMetadataKeys;
    NSArray *_metadataItems;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(retain, nonatomic) NSArray *sortedMetadataKeys; // @synthesize sortedMetadataKeys=_sortedMetadataKeys;
@property(retain, nonatomic) NSDictionary *metadataParams; // @synthesize metadataParams=_metadataParams;
@property(retain, nonatomic) IBGSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void).cxx_destruct;
- (id)getSortedArrayFromArray:(id)arg1;
- (void)removeParamAndReloadWithKey:(id)arg1;
- (void)removeUserEvents;
- (void)removeUserAttributes;
- (void)removeUserData;
- (void)removeUserSteps;
- (void)removeIBGLogs;
- (void)removeNetworkLogs;
- (void)removeConsoleLogs;
- (void)removeDisabledFeaturesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSnapshot:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableDictionary, YTUploadTaskStore;

@interface YTUploadTypeCache : NSObject
{
    YTUploadTaskStore *_taskStore;
    GIMMe *_gimme;
    NSMutableDictionary *_cachedTypes;
    NSMutableDictionary *_groups;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableDictionary *cachedTypes; // @synthesize cachedTypes=_cachedTypes;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)doStoreFetchTypeForFrontendID:(id)arg1;
- (void)doStoreFetchTypeForFrontendID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateTypeForFrontendID:(id)arg1;
- (void)fetchTypeForFrontendID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addType:(int)arg1 forFrontendID:(id)arg2;
- (id)init;

@end


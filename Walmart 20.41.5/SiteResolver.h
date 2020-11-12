//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/ISiteResolver-Protocol.h>

@class NSString;

@interface SiteResolver : NSObject <ISiteResolver>
{
}

+ (id)getInstance:(id)arg1 siteCacher:(id)arg2;
+ (id)getInstance;
- (void)cancelAutoLoad;
- (void)addToCache:(id)arg1 merged:(_Bool)arg2 oldCache:(id)arg3;
- (id)updateAndMergeConfig:(id)arg1 partialResponse:(id)arg2;
- (void)getConfigsByBeaconIds:(id)arg1 andIgnoreServiceStatus:(_Bool)arg2 andTimeOutSeconds:(int)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)getConfigsBySiteName:(id)arg1 andIgnoreServiceStatus:(_Bool)arg2 andTimeOutSeconds:(int)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)initPrivate:(id)arg1 siteCacher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

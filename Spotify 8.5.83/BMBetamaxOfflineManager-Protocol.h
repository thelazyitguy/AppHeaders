//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSURL;
@protocol BMBetamaxOfflineManagerObserver, BMMediaExtension, BMOfflineOptions, BMOfflineRequest;

@protocol BMBetamaxOfflineManager <NSObject>
- (void)removeObserver:(id <BMBetamaxOfflineManagerObserver>)arg1;
- (void)addObserver:(id <BMBetamaxOfflineManagerObserver>)arg1;
- (NSNumber *)localFileSizeForMediaURL:(NSURL *)arg1;
- (NSURL *)localFileURLForMediaURL:(NSURL *)arg1;
- (long long)getState:(NSURL *)arg1;
- (void)delete:(NSURL *)arg1;
- (_Bool)downloadWithRequest:(id <BMOfflineRequest>)arg1 options:(id <BMOfflineOptions>)arg2;
- (_Bool)downloadWithRequest:(id <BMOfflineRequest>)arg1;
- (id <BMMediaExtension>)provideOfflineMediaExtension;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, ServerRequestQueue;

@interface LPFilteredAddSiteModel : NSObject
{
    ServerRequestQueue *_serverRequestQueue;
    NSMutableArray *_callbacks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(readonly, nonatomic) ServerRequestQueue *serverRequestQueue; // @synthesize serverRequestQueue=_serverRequestQueue;
- (void)siteQuery:(id)arg1 limit:(unsigned long long)arg2 sequence:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

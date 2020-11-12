//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <APIGuard/NSURLSessionDelegate-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol APIGuardDelegate;

@interface  F1 : NSObject <NSURLSessionDelegate>
{
    id <APIGuardDelegate> _agDelegate;
    NSString *_host;
    NSString *_scheme;
    NSNumber *_port;
    NSString *_path;
    NSArray *_queryItems;
    double _timeout;
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSArray *queryItems; // @synthesize queryItems=_queryItems;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property __weak id <APIGuardDelegate> agDelegate; // @synthesize agDelegate=_agDelegate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)7;
- (void)start:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createRequest;
- (id)generateUpdateUrlQueryParams:(id)arg1 baseQueryParams:(id)arg2;
- (id)jx;
- (id)dF;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPLogRequestContext, NSString;

@interface GIPClearcutRequest : NSObject
{
    GIPLogRequestContext *_logContext;
    NSString *_path;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) GIPLogRequestContext *logContext; // @synthesize logContext=_logContext;
- (id)initWithLogContext:(id)arg1 path:(id)arg2;
- (id)initWithLogSource:(int)arg1 account:(id)arg2 path:(id)arg3;

@end


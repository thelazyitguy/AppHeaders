//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ServerRequestHandlerDelegate-Protocol.h"

@class LPSharingModel, NSString;

@interface LPSharingModelCompletionProxy : NSObject <ServerRequestHandlerDelegate>
{
    CDUnknownBlockType _completion;
    LPSharingModel *_model;
}

+ (id)proxyWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) LPSharingModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)serverRequestFailed:(id)arg1 withError:(id)arg2;
- (void)serverRequestSucceeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

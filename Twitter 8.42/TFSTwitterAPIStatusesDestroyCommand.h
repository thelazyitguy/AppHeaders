//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber;

@interface TFSTwitterAPIStatusesDestroyCommand : TFSTwitterAPICommand
{
    NSNumber *_statusID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *statusID; // @synthesize statusID=_statusID;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 statusID:(id)arg3 source:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithAccountID:(id)arg1 context:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/NSObject-Protocol.h>

@class NSException, NSString;

@protocol ElectrodeFailureMessage <NSObject>
@property(nonatomic, readonly) NSString *message;
@property(nonatomic, readonly) NSString *code;

@optional
@property(nonatomic, readonly) NSException *exception;
@property(nonatomic, readonly) NSString *debugMessage;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ErrorMessage, NSString;

@interface ProtocolErrorEvent : NSObject
{
    NSString *_sdkTransactionID;
    ErrorMessage *_errorMessage;
}

@property(readonly, nonatomic) ErrorMessage *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSString *sdkTransactionID; // @synthesize sdkTransactionID=_sdkTransactionID;
- (void).cxx_destruct;
- (id)getSDKTransactionID;
- (id)getErrorMessage;
- (id)initWithSDKTransactionID:(id)arg1 errorMessage:(id)arg2;

@end


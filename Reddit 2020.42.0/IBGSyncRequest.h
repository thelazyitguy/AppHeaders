//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSArray, NSString;
@protocol IBGSyncRequestDelegate;

@interface IBGSyncRequest : IBGNetworkRequest
{
    id <IBGSyncRequestDelegate> _delegate;
    unsigned long long _numberOfMessages;
    NSArray *_readMessagesReceipts;
    NSString *_lastMessageDate;
    NSString *_UUID;
}

@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSString *lastMessageDate; // @synthesize lastMessageDate=_lastMessageDate;
@property(retain, nonatomic) NSArray *readMessagesReceipts; // @synthesize readMessagesReceipts=_readMessagesReceipts;
@property(nonatomic) unsigned long long numberOfMessages; // @synthesize numberOfMessages=_numberOfMessages;
@property(nonatomic) __weak id <IBGSyncRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithDelegate:(id)arg1 numberOfmessages:(unsigned long long)arg2 readMessagesReceipts:(id)arg3 lastMessageDate:(id)arg4;

@end


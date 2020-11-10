//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EmailSender : NSObject
{
    NSString *_senderEmail;
    NSString *_senderPassword;
    NSString *_relayHost;
    NSArray *_portArray;
}

+ (id)sharedSender;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *portArray; // @synthesize portArray=_portArray;
@property(retain, nonatomic) NSString *relayHost; // @synthesize relayHost=_relayHost;
@property(retain, nonatomic) NSString *senderPassword; // @synthesize senderPassword=_senderPassword;
@property(retain, nonatomic) NSString *senderEmail; // @synthesize senderEmail=_senderEmail;
- (id)defatuSubject;
- (void)sendMessageConcurrent:(id)arg1;
- (id)emailMessage:(id)arg1 text:(id)arg2;
- (void)sendEmail:(id)arg1 text:(id)arg2;
- (void)sendEmailConcurrent:(id)arg1 text:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface LPMessageArchiveData : NSObject
{
    NSString *_messageID;
    NSString *_messageBody;
    NSString *_recipientUserID;
    NSDate *_deliveryDateTime;
}

@property(copy, nonatomic) NSDate *deliveryDateTime; // @synthesize deliveryDateTime=_deliveryDateTime;
@property(copy, nonatomic) NSString *recipientUserID; // @synthesize recipientUserID=_recipientUserID;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)initWithMessageID:(id)arg1 messageBody:(id)arg2 recipientUserID:(id)arg3 deliveryDateTime:(id)arg4;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MPFCustomerInformation, MPFSetNotificationSubscriptionsRequest;

@interface MPFSetNotificationSubscriptionsInternalRequest : CoralModel <NSCoding, NSCopying>
{
    MPFSetNotificationSubscriptionsRequest *_setNotificationSubscriptionsRequest;
    MPFCustomerInformation *_customerInformation;
}

+ (id)type;
@property(retain, nonatomic) MPFCustomerInformation *customerInformation; // @synthesize customerInformation=_customerInformation;
@property(retain, nonatomic) MPFSetNotificationSubscriptionsRequest *setNotificationSubscriptionsRequest; // @synthesize setNotificationSubscriptionsRequest=_setNotificationSubscriptionsRequest;
- (void).cxx_destruct;

@end

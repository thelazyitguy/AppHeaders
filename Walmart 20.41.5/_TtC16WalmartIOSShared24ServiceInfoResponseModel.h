//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class NSString;

@interface _TtC16WalmartIOSShared24ServiceInfoResponseModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: fulfillmentType
    // Error parsing type: , name: reservationType
    // Error parsing type: , name: dispenseType
    // Error parsing type: , name: priority
    // Error parsing type: , name: carrier
    // Error parsing type: , name: fulfillmentOption
    // Error parsing type: , name: locationType
}

@property(nonatomic, copy) NSString *locationType;
@property(nonatomic, copy) NSString *fulfillmentOption;
@property(nonatomic, copy) NSString *carrier;
@property(nonatomic) long long priority; // @synthesize priority;
@property(nonatomic, copy) NSString *dispenseType;
@property(nonatomic, copy) NSString *reservationType;
@property(nonatomic, copy) NSString *fulfillmentType;

@end

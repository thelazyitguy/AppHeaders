//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface OrchPhoneFormValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countryCallingCode; // @dynamic countryCallingCode;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(nonatomic) _Bool hasCountryCallingCode; // @dynamic hasCountryCallingCode;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end


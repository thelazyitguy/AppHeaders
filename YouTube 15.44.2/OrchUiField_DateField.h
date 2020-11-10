//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, OrchDate;

@interface OrchUiField_DateField : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long dateRangeReference; // @dynamic dateRangeReference;
@property(nonatomic) int dateRangeType; // @dynamic dateRangeType;
@property(copy, nonatomic) NSString *format; // @dynamic format;
@property(nonatomic) _Bool hasDateRangeReference; // @dynamic hasDateRangeReference;
@property(nonatomic) _Bool hasDateRangeType; // @dynamic hasDateRangeType;
@property(nonatomic) _Bool hasFormat; // @dynamic hasFormat;
@property(nonatomic) _Bool hasInitialValue; // @dynamic hasInitialValue;
@property(nonatomic) _Bool hasMaxDate; // @dynamic hasMaxDate;
@property(nonatomic) _Bool hasMaxDateErrorMessage; // @dynamic hasMaxDateErrorMessage;
@property(nonatomic) _Bool hasMinDate; // @dynamic hasMinDate;
@property(nonatomic) _Bool hasMinDateErrorMessage; // @dynamic hasMinDateErrorMessage;
@property(nonatomic) _Bool hasShowDatepicker; // @dynamic hasShowDatepicker;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) OrchDate *initialValue; // @dynamic initialValue;
@property(retain, nonatomic) OrchDate *maxDate; // @dynamic maxDate;
@property(copy, nonatomic) NSString *maxDateErrorMessage; // @dynamic maxDateErrorMessage;
@property(retain, nonatomic) OrchDate *minDate; // @dynamic minDate;
@property(copy, nonatomic) NSString *minDateErrorMessage; // @dynamic minDateErrorMessage;
@property(nonatomic) _Bool showDatepicker; // @dynamic showDatepicker;
@property(nonatomic) int type; // @dynamic type;

@end


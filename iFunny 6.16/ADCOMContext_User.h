//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GPBMessage.h>

@class ADCOMContext_Geo, NSMutableArray, NSString;

@interface ADCOMContext_User : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *buyeruid; // @dynamic buyeruid;
@property(copy, nonatomic) NSString *consent; // @dynamic consent;
@property(retain, nonatomic) NSMutableArray *dataArray; // @dynamic dataArray;
@property(readonly, nonatomic) unsigned long long dataArray_Count; // @dynamic dataArray_Count;
@property(retain, nonatomic) NSMutableArray *extArray; // @dynamic extArray;
@property(readonly, nonatomic) unsigned long long extArray_Count; // @dynamic extArray_Count;
@property(copy, nonatomic) NSString *gender; // @dynamic gender;
@property(retain, nonatomic) ADCOMContext_Geo *geo; // @dynamic geo;
@property(nonatomic) _Bool hasGeo; // @dynamic hasGeo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *keywords; // @dynamic keywords;
@property(nonatomic) unsigned int yob; // @dynamic yob;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface SRDSSearchDefaultAddressModel : JSONModel
{
    NSString<Optional> *_zipCode;
    NSString<Optional> *_locationType;
    NSString<Optional> *_addressId;
}

@property(retain, nonatomic) NSString<Optional> *addressId; // @synthesize addressId=_addressId;
@property(retain, nonatomic) NSString<Optional> *locationType; // @synthesize locationType=_locationType;
@property(retain, nonatomic) NSString<Optional> *zipCode; // @synthesize zipCode=_zipCode;
- (void).cxx_destruct;

@end

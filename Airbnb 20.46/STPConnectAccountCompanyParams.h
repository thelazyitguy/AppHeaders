//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPFormEncodable-Protocol.h"

@class NSDictionary, NSNumber, NSString, STPConnectAccountAddress;

@interface STPConnectAccountCompanyParams : NSObject <STPFormEncodable>
{
    NSDictionary *additionalAPIParameters;
    STPConnectAccountAddress *_address;
    STPConnectAccountAddress *_kanaAddress;
    STPConnectAccountAddress *_kanjiAddress;
    NSNumber *_directorsProvided;
    NSString *_name;
    NSString *_kanaName;
    NSString *_kanjiName;
    NSNumber *_ownersProvided;
    NSString *_phone;
    NSString *_taxID;
    NSString *_taxIDRegistrar;
    NSString *_vatID;
}

+ (id)rootObjectName;
+ (id)propertyNamesToFormFieldNamesMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *vatID; // @synthesize vatID=_vatID;
@property(copy, nonatomic) NSString *taxIDRegistrar; // @synthesize taxIDRegistrar=_taxIDRegistrar;
@property(copy, nonatomic) NSString *taxID; // @synthesize taxID=_taxID;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSNumber *ownersProvided; // @synthesize ownersProvided=_ownersProvided;
@property(copy, nonatomic) NSString *kanjiName; // @synthesize kanjiName=_kanjiName;
@property(copy, nonatomic) NSString *kanaName; // @synthesize kanaName=_kanaName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *directorsProvided; // @synthesize directorsProvided=_directorsProvided;
@property(retain, nonatomic) STPConnectAccountAddress *kanjiAddress; // @synthesize kanjiAddress=_kanjiAddress;
@property(retain, nonatomic) STPConnectAccountAddress *kanaAddress; // @synthesize kanaAddress=_kanaAddress;
@property(retain, nonatomic) STPConnectAccountAddress *address; // @synthesize address=_address;
@property(copy, nonatomic) NSDictionary *additionalAPIParameters; // @synthesize additionalAPIParameters;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, UjetNBPhoneNumberDesc;

@interface UjetNBPhoneMetaData : NSObject
{
    _Bool _sameMobileAndFixedLinePattern;
    _Bool _mainCountryForCode;
    _Bool _leadingZeroPossible;
    UjetNBPhoneNumberDesc *_generalDesc;
    UjetNBPhoneNumberDesc *_fixedLine;
    UjetNBPhoneNumberDesc *_mobile;
    UjetNBPhoneNumberDesc *_tollFree;
    UjetNBPhoneNumberDesc *_premiumRate;
    UjetNBPhoneNumberDesc *_sharedCost;
    UjetNBPhoneNumberDesc *_personalNumber;
    UjetNBPhoneNumberDesc *_voip;
    UjetNBPhoneNumberDesc *_pager;
    UjetNBPhoneNumberDesc *_uan;
    UjetNBPhoneNumberDesc *_emergency;
    UjetNBPhoneNumberDesc *_voicemail;
    UjetNBPhoneNumberDesc *_noInternationalDialling;
    NSString *_codeID;
    NSNumber *_countryCode;
    NSString *_internationalPrefix;
    NSString *_preferredInternationalPrefix;
    NSString *_nationalPrefix;
    NSString *_preferredExtnPrefix;
    NSString *_nationalPrefixForParsing;
    NSString *_nationalPrefixTransformRule;
    NSArray *_numberFormats;
    NSArray *_intlNumberFormats;
    NSString *_leadingDigits;
}

@property(nonatomic) _Bool leadingZeroPossible; // @synthesize leadingZeroPossible=_leadingZeroPossible;
@property(retain, nonatomic) NSString *leadingDigits; // @synthesize leadingDigits=_leadingDigits;
@property(nonatomic) _Bool mainCountryForCode; // @synthesize mainCountryForCode=_mainCountryForCode;
@property(retain, nonatomic) NSArray *intlNumberFormats; // @synthesize intlNumberFormats=_intlNumberFormats;
@property(retain, nonatomic) NSArray *numberFormats; // @synthesize numberFormats=_numberFormats;
@property(nonatomic) _Bool sameMobileAndFixedLinePattern; // @synthesize sameMobileAndFixedLinePattern=_sameMobileAndFixedLinePattern;
@property(retain, nonatomic) NSString *nationalPrefixTransformRule; // @synthesize nationalPrefixTransformRule=_nationalPrefixTransformRule;
@property(retain, nonatomic) NSString *nationalPrefixForParsing; // @synthesize nationalPrefixForParsing=_nationalPrefixForParsing;
@property(retain, nonatomic) NSString *preferredExtnPrefix; // @synthesize preferredExtnPrefix=_preferredExtnPrefix;
@property(retain, nonatomic) NSString *nationalPrefix; // @synthesize nationalPrefix=_nationalPrefix;
@property(retain, nonatomic) NSString *preferredInternationalPrefix; // @synthesize preferredInternationalPrefix=_preferredInternationalPrefix;
@property(retain, nonatomic) NSString *internationalPrefix; // @synthesize internationalPrefix=_internationalPrefix;
@property(retain, nonatomic) NSNumber *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *codeID; // @synthesize codeID=_codeID;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *noInternationalDialling; // @synthesize noInternationalDialling=_noInternationalDialling;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *voicemail; // @synthesize voicemail=_voicemail;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *emergency; // @synthesize emergency=_emergency;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *uan; // @synthesize uan=_uan;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *pager; // @synthesize pager=_pager;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *voip; // @synthesize voip=_voip;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *personalNumber; // @synthesize personalNumber=_personalNumber;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *sharedCost; // @synthesize sharedCost=_sharedCost;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *premiumRate; // @synthesize premiumRate=_premiumRate;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *tollFree; // @synthesize tollFree=_tollFree;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *fixedLine; // @synthesize fixedLine=_fixedLine;
@property(retain, nonatomic) UjetNBPhoneNumberDesc *generalDesc; // @synthesize generalDesc=_generalDesc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)numberFormatsFromEntry:(id)arg1;
- (id)initWithEntry:(id)arg1;
- (id)init;

@end

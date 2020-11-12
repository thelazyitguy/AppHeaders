//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol LXCountryDetailsModel><Optional, Optional;

@interface LXCountrySectionModel : JSONModel
{
    NSArray<LXCountryDetailsModel><Optional> *_secondaryCountriesList;
    NSArray<LXCountryDetailsModel><Optional> *_primaryCountriesList;
    NSString<Optional> *_secondaryCountriesHeader;
    NSString<Optional> *_primaryCountriesHeader;
    NSString<Optional> *_mobileLinkText;
    NSString<Optional> *_placeholder;
    NSString<Optional> *_errorText;
}

@property(retain, nonatomic) NSString<Optional> *errorText; // @synthesize errorText=_errorText;
@property(retain, nonatomic) NSString<Optional> *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString<Optional> *mobileLinkText; // @synthesize mobileLinkText=_mobileLinkText;
@property(retain, nonatomic) NSString<Optional> *primaryCountriesHeader; // @synthesize primaryCountriesHeader=_primaryCountriesHeader;
@property(retain, nonatomic) NSString<Optional> *secondaryCountriesHeader; // @synthesize secondaryCountriesHeader=_secondaryCountriesHeader;
@property(retain, nonatomic) NSArray<LXCountryDetailsModel><Optional> *primaryCountriesList; // @synthesize primaryCountriesList=_primaryCountriesList;
@property(retain, nonatomic) NSArray<LXCountryDetailsModel><Optional> *secondaryCountriesList; // @synthesize secondaryCountriesList=_secondaryCountriesList;
- (void).cxx_destruct;

@end

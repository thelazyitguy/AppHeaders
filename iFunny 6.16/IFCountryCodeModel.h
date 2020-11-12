//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFModelProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol IFControllerProtocol, IFCountryCodeModelDelegate;

@interface IFCountryCodeModel : NSObject <IFModelProtocol>
{
    id <IFControllerProtocol> controller;
    NSObject<IFCountryCodeModelDelegate> *_delegate;
    NSString *_filterText;
    NSMutableArray *_countriesInAlphabeticOrder;
    NSArray *_sectionTitles;
    NSMutableArray *_filteredCountries;
    NSMutableArray *_allCountries;
}

+ (_Bool)isEntity:(id)arg1 respondsToFilter:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allCountries; // @synthesize allCountries=_allCountries;
@property(retain, nonatomic) NSMutableArray *filteredCountries; // @synthesize filteredCountries=_filteredCountries;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableArray *countriesInAlphabeticOrder; // @synthesize countriesInAlphabeticOrder=_countriesInAlphabeticOrder;
@property(retain, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(nonatomic) __weak NSObject<IFCountryCodeModelDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IFControllerProtocol> controller; // @synthesize controller;
- (long long)sectionForString:(id)arg1;
- (long long)sectionForSectionAtIndex:(long long)arg1;
- (id)sectionIndexTitles;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)countryAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (unsigned long long)numberOfCountriesInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (void)retrieveCountries:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

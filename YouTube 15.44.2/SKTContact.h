//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSArray, NSString, SKTContactMethod, UIImage;

@interface SKTContact : NSObject <NSCopying>
{
    _Bool _isDeviceSuggestion;
    UIImage *_photoImage;
    NSString *_primaryCollationName;
    NSString *_secondaryCollationName;
    unsigned long long _displayNameState;
    unsigned long long _displayNameType;
    NSArray *_photoURLs;
    NSArray *_preferredNames;
    SKTContactMethod *_primaryMethod;
    NSArray *_allMethods;
    NSString *_familyName;
    NSString *_givenName;
    NSString *_displayNameVariable;
    NSString *_deviceContactID;
}

+ (id)photoURLsFromGroup:(id)arg1;
+ (id)preferredDisplayNamesFromGroup:(id)arg1;
+ (id)fallbackDisplayNameFromPerson:(id)arg1;
+ (id)profileNameFromPerson:(id)arg1;
+ (id)photoURLFromPersonPhoto:(id)arg1;
+ (_Bool)isPersonNameProfileName:(id)arg1;
+ (id)notificationTargetForMethodField:(id)arg1 peopleDataService:(id)arg2 clientConfig:(id)arg3;
+ (id)notificationTargetForMethodField:(id)arg1 autocompleteSession:(id)arg2;
+ (id)contactMethodsFromMethodFields:(id)arg1 forClientConfig:(id)arg2;
+ (unsigned long long)secondarySortOrderForSortOrder:(unsigned long long)arg1;
+ (id)collationNameForDisplayName:(id)arg1 phoneticFamilyName:(id)arg2 familyName:(id)arg3 phoneticGivenName:(id)arg4 givenName:(id)arg5 sortOrder:(unsigned long long)arg6;
+ (id)collationNameForGSCContact:(id)arg1 sortOrder:(unsigned long long)arg2;
+ (id)collationNameForAutocompletionPersonName:(id)arg1 sortOrder:(unsigned long long)arg2;
+ (id)contactWithManualInput:(id)arg1 forClientConfig:(id)arg2;
+ (id)contactWithPrimaryMethod:(id)arg1 displayName:(id)arg2 photoURL:(id)arg3;
+ (id)contactFromGSCContact:(id)arg1 usingAutocompleteService:(id)arg2 methodFieldFactory:(id)arg3 sortOrder:(unsigned long long)arg4 forClientConfig:(id)arg5;
+ (id)contactFromGSCContact:(id)arg1 usingAutocompleteSession:(id)arg2 methodFieldFactory:(id)arg3 sortOrder:(unsigned long long)arg4 forClientConfig:(id)arg5;
+ (id)contactFromGroup:(id)arg1 sortOrder:(unsigned long long)arg2;
+ (id)contactFromAutocompletionPerson:(id)arg1 withOrderedMethodFields:(id)arg2 forClientConfig:(id)arg3 sortOrder:(unsigned long long)arg4;
+ (id)contactFromAutocompletionPerson:(id)arg1 forClientConfig:(id)arg2 sortOrder:(unsigned long long)arg3;
+ (id)contactFromAutocompletion:(id)arg1 forClientConfig:(id)arg2 sortOrder:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deviceContactID; // @synthesize deviceContactID=_deviceContactID;
@property(copy, nonatomic) NSString *displayNameVariable; // @synthesize displayNameVariable=_displayNameVariable;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(nonatomic) _Bool isDeviceSuggestion; // @synthesize isDeviceSuggestion=_isDeviceSuggestion;
@property(readonly, nonatomic) NSArray *allMethods; // @synthesize allMethods=_allMethods;
@property(readonly, nonatomic) SKTContactMethod *primaryMethod; // @synthesize primaryMethod=_primaryMethod;
@property(copy, nonatomic) NSArray *preferredNames; // @synthesize preferredNames=_preferredNames;
@property(copy, nonatomic) NSArray *photoURLs; // @synthesize photoURLs=_photoURLs;
@property(readonly, nonatomic) unsigned long long displayNameType; // @synthesize displayNameType=_displayNameType;
@property(readonly, nonatomic) unsigned long long displayNameState; // @synthesize displayNameState=_displayNameState;
@property(readonly, nonatomic) NSString *secondaryCollationName; // @synthesize secondaryCollationName=_secondaryCollationName;
@property(readonly, nonatomic) NSString *primaryCollationName; // @synthesize primaryCollationName=_primaryCollationName;
- (void)updateDisplayNameState;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)maybeUpdateDisplayNameIsVisible:(_Bool)arg1;
- (id)cloneWithPrimaryContactMethod:(id)arg1;
@property(readonly, nonatomic) _Bool isExpandable;
@property(readonly, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
- (id)displayNameInitial;
@property(copy, nonatomic) NSString *displayName;
- (id)initWithDisplayName:(id)arg1 primaryCollationName:(id)arg2 secondaryCollationName:(id)arg3 familyName:(id)arg4 givenName:(id)arg5 photoURLs:(id)arg6 preferredNames:(id)arg7 primaryMethod:(id)arg8 allMethods:(id)arg9 displayNameType:(unsigned long long)arg10;
- (id)initWithDisplayName:(id)arg1 primaryCollationName:(id)arg2 secondaryCollationName:(id)arg3 familyName:(id)arg4 givenName:(id)arg5 deviceContactID:(id)arg6 primaryMethod:(id)arg7 allMethods:(id)arg8 displayNameType:(unsigned long long)arg9;
- (id)contactMethodA11yLabel:(id)arg1 withDisplayOptions:(id)arg2;
- (id)hideNameA11yLabel;
- (id)chipA11yLabelWithDisplayOptions:(id)arg1;
- (id)contactA11yLabelWithSelectedMethod:(id)arg1 displayOptions:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LPEntity.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "VaultEntity-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface FormFill : LPEntity <NSCoding, NSCopying, VaultEntity>
{
    int _pwprotect;
    int _creditmon;
    NSString *_ffid;
    NSString *_profiletype;
    NSString *_group;
    NSString *_sharedfolderid;
    NSData *_profilename;
    NSData *_profilelanguage;
    NSData *_firstname;
    NSData *_middlename;
    NSData *_lastname;
    NSData *_email;
    NSData *_company;
    NSData *_ssn;
    NSData *_birthday;
    NSData *_address1;
    NSData *_address2;
    NSData *_city;
    NSData *_state;
    NSData *_state_name;
    NSData *_zip;
    NSData *_country;
    NSData *_country_cc3l;
    NSData *_country_name;
    NSData *_mobilephone;
    NSData *_mobilephone3lcc;
    NSData *_mobileext;
    NSData *_evephone;
    NSData *_evephone3lcc;
    NSData *_eveext;
    NSData *_phone;
    NSData *_phone3lcc;
    NSData *_phoneext;
    NSData *_fax;
    NSData *_fax3lcc;
    NSData *_faxext;
    NSData *_ccnum;
    NSData *_ccexp;
    NSData *_cccsc;
    NSData *_username;
    NSData *_address3;
    NSData *_title;
    NSData *_gender;
    NSData *_driverlicensenum;
    NSData *_taxid;
    NSData *_bankname;
    NSData *_bankacctnum;
    NSData *_bankroutingnum;
    NSData *_timezone;
    NSData *_county;
    NSData *_ccstart;
    NSData *_ccname;
    NSData *_ccissuenum;
    NSData *_notes;
    NSData *_lastname2;
    NSData *_lastname3;
    NSData *_mobileemail;
    NSData *_firstname2;
    NSData *_firstname3;
    NSMutableArray *_custom_fields;
}

+ (id)currentTimeZone;
+ (id)currentCountry;
+ (id)currentLanguage;
+ (id)dialingCodeByCC3L;
+ (id)timezonevalues;
+ (id)timezonenames;
+ (id)countrycc3ls;
+ (id)countrycc2ls;
+ (id)countrynames;
+ (id)statevalues;
+ (id)statenames;
+ (id)gendervalues;
+ (id)gendernames;
+ (id)titlevalues;
+ (id)titlenames;
+ (id)profilelanguagevalues;
+ (id)profilelanguagenames;
+ (id)blankFormFill;
+ (id)formFill;
- (void).cxx_destruct;
@property(nonatomic) int creditmon; // @synthesize creditmon=_creditmon;
@property(nonatomic) int pwprotect; // @synthesize pwprotect=_pwprotect;
@property(retain, nonatomic) NSMutableArray *custom_fields; // @synthesize custom_fields=_custom_fields;
@property(retain, nonatomic) NSData *firstname3; // @synthesize firstname3=_firstname3;
@property(retain, nonatomic) NSData *firstname2; // @synthesize firstname2=_firstname2;
@property(retain, nonatomic) NSData *mobileemail; // @synthesize mobileemail=_mobileemail;
@property(retain, nonatomic) NSData *lastname3; // @synthesize lastname3=_lastname3;
@property(retain, nonatomic) NSData *lastname2; // @synthesize lastname2=_lastname2;
@property(retain, nonatomic) NSData *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSData *ccissuenum; // @synthesize ccissuenum=_ccissuenum;
@property(retain, nonatomic) NSData *ccname; // @synthesize ccname=_ccname;
@property(retain, nonatomic) NSData *ccstart; // @synthesize ccstart=_ccstart;
@property(retain, nonatomic) NSData *county; // @synthesize county=_county;
@property(retain, nonatomic) NSData *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSData *bankroutingnum; // @synthesize bankroutingnum=_bankroutingnum;
@property(retain, nonatomic) NSData *bankacctnum; // @synthesize bankacctnum=_bankacctnum;
@property(retain, nonatomic) NSData *bankname; // @synthesize bankname=_bankname;
@property(retain, nonatomic) NSData *taxid; // @synthesize taxid=_taxid;
@property(retain, nonatomic) NSData *driverlicensenum; // @synthesize driverlicensenum=_driverlicensenum;
@property(retain, nonatomic) NSData *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSData *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *address3; // @synthesize address3=_address3;
@property(retain, nonatomic) NSData *username; // @synthesize username=_username;
@property(retain, nonatomic) NSData *cccsc; // @synthesize cccsc=_cccsc;
@property(retain, nonatomic) NSData *ccexp; // @synthesize ccexp=_ccexp;
@property(retain, nonatomic) NSData *ccnum; // @synthesize ccnum=_ccnum;
@property(retain, nonatomic) NSData *faxext; // @synthesize faxext=_faxext;
@property(retain, nonatomic) NSData *fax3lcc; // @synthesize fax3lcc=_fax3lcc;
@property(retain, nonatomic) NSData *fax; // @synthesize fax=_fax;
@property(retain, nonatomic) NSData *phoneext; // @synthesize phoneext=_phoneext;
@property(retain, nonatomic) NSData *phone3lcc; // @synthesize phone3lcc=_phone3lcc;
@property(retain, nonatomic) NSData *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSData *eveext; // @synthesize eveext=_eveext;
@property(retain, nonatomic) NSData *evephone3lcc; // @synthesize evephone3lcc=_evephone3lcc;
@property(retain, nonatomic) NSData *evephone; // @synthesize evephone=_evephone;
@property(retain, nonatomic) NSData *mobileext; // @synthesize mobileext=_mobileext;
@property(retain, nonatomic) NSData *mobilephone3lcc; // @synthesize mobilephone3lcc=_mobilephone3lcc;
@property(retain, nonatomic) NSData *mobilephone; // @synthesize mobilephone=_mobilephone;
@property(retain, nonatomic) NSData *country_name; // @synthesize country_name=_country_name;
@property(retain, nonatomic) NSData *country_cc3l; // @synthesize country_cc3l=_country_cc3l;
@property(retain, nonatomic) NSData *country; // @synthesize country=_country;
@property(retain, nonatomic) NSData *zip; // @synthesize zip=_zip;
@property(retain, nonatomic) NSData *state_name; // @synthesize state_name=_state_name;
@property(retain, nonatomic) NSData *state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *city; // @synthesize city=_city;
@property(retain, nonatomic) NSData *address2; // @synthesize address2=_address2;
@property(retain, nonatomic) NSData *address1; // @synthesize address1=_address1;
@property(retain, nonatomic) NSData *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSData *ssn; // @synthesize ssn=_ssn;
@property(retain, nonatomic) NSData *company; // @synthesize company=_company;
@property(retain, nonatomic) NSData *email; // @synthesize email=_email;
@property(retain, nonatomic) NSData *lastname; // @synthesize lastname=_lastname;
@property(retain, nonatomic) NSData *middlename; // @synthesize middlename=_middlename;
@property(retain, nonatomic) NSData *firstname; // @synthesize firstname=_firstname;
@property(retain, nonatomic) NSData *profilelanguage; // @synthesize profilelanguage=_profilelanguage;
@property(retain, nonatomic) NSData *profilename; // @synthesize profilename=_profilename;
@property(retain, nonatomic) NSString *sharedfolderid; // @synthesize sharedfolderid=_sharedfolderid;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *profiletype; // @synthesize profiletype=_profiletype;
@property(retain, nonatomic) NSString *ffid; // @synthesize ffid=_ffid;
- (_Bool)passesFilter:(id)arg1 searchInNotes:(_Bool)arg2 searchInUsernames:(_Bool)arg3;
- (_Bool)passesFilter:(id)arg1 searchInNotes:(_Bool)arg2;
- (_Bool)passesFilter:(id)arg1;
- (id)getPassword;
- (id)getUsername;
- (id)getGroup;
@property(readonly, nonatomic) _Bool isPasswordVisible;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool isMovable;
@property(readonly, nonatomic) _Bool isSharedToOthers;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool isNew;
@property(readonly, nonatomic) _Bool isFillable;
@property(readonly, nonatomic) _Bool isGroup;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isPendingShare;
@property(readonly, nonatomic) _Bool isSecureNote;
@property(readonly, nonatomic) _Bool isAccount;
@property(readonly, nonatomic) _Bool hasURL;
@property(readonly, nonatomic) _Bool hasSiteIcon;
@property(readonly, nonatomic) _Bool hasCopiable;
@property(readonly, nonatomic) _Bool hasUsername;
@property(readonly, nonatomic) _Bool hasPassword;
@property(readonly, nonatomic) _Bool hasFavorite;
@property(readonly, nonatomic) _Bool hasAddress;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForManageShare;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForLaunch;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForEdit;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForPassword;
- (void)copyFrom:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)jsonString;
- (id)getFieldNameDictionary;
- (id)humanReadableDateForValue:(id)arg1 monthYearOnly:(_Bool)arg2;
- (id)humanReadableValueForValue:(id)arg1 names:(id)arg2 values:(id)arg3;
- (id)getDictionary:(_Bool)arg1;
- (id)getDictionary;
- (id)iconImage;
- (id)iconBackgroundColor;
@property(readonly, nonatomic) _Bool isBankAccount; // @dynamic isBankAccount;
@property(readonly, nonatomic) _Bool isAddress; // @dynamic isAddress;
@property(readonly, nonatomic) _Bool isCreditCard; // @dynamic isCreditCard;
@property(readonly, nonatomic) _Bool hasBankAccount; // @dynamic hasBankAccount;
@property(readonly, nonatomic) _Bool hasCreditCard; // @dynamic hasCreditCard;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (id)getName;
- (id)uniqueID;
- (id)getKey;
- (id)getShareInfo;
- (id)conciseTableViewModelWithSubType:(long long)arg1;
- (id)tableViewModelWithSubType:(long long)arg1;
- (id)conciseTableViewModel;
- (id)tableViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


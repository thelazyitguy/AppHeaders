//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SMAAppTransportSecuritySettings : NSObject
{
}

- (unsigned long long)atsSettingOniOS8;
- (unsigned long long)atsSettingFromAtsDictionaryOniOS9:(id)arg1;
- (unsigned long long)atsSettingFromAtsDictionaryOniOS10AndLater:(id)arg1;
- (_Bool)isUrlExemptFromAtsSettings:(id)arg1;
- (_Bool)isDomainExemptFromAtsSettings:(id)arg1;
@property(readonly, nonatomic, getter=isAtsDisabled) _Bool isAtsDisabled;
@property(readonly, nonatomic) NSSet *atsExceptionDomains;
@property(readonly, nonatomic) unsigned long long atsSetting;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgJodaTimeReadablePeriod-Protocol.h"

@class NSString;

@interface OrgJodaTimeBaseAbstractPeriod : NSObject <OrgJodaTimeReadablePeriod>
{
}

- (id)toStringWithOrgJodaTimeFormatPeriodFormatter:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)toMutablePeriod;
- (id)toPeriod;
- (int)indexOfWithOrgJodaTimeDurationFieldType:(id)arg1;
- (_Bool)isSupportedWithOrgJodaTimeDurationFieldType:(id)arg1;
- (int)getWithOrgJodaTimeDurationFieldType:(id)arg1;
- (id)getValues;
- (id)getFieldTypes;
- (id)getFieldTypeWithInt:(int)arg1;
- (int)size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

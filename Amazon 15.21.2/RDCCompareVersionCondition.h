//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RDCRawItemCondition.h"

@class RDCVersionNumber;

@interface RDCCompareVersionCondition : RDCRawItemCondition
{
    RDCVersionNumber *_compareVersion;
}

@property(retain, nonatomic) RDCVersionNumber *compareVersion; // @synthesize compareVersion=_compareVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)evaluate;
- (id)initWithCompareVersion:(id)arg1 requirement:(id)arg2 overrideAttributes:(id)arg3 childConditions:(id)arg4;

@end

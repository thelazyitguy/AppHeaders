//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSAutocompletePopulousApplicabilityInternalResponse.h"

@class JavaUtilOptional;

@interface DYNSAutocompleteAutoValue_PopulousApplicabilityInternalResponse : DYNSAutocompletePopulousApplicabilityInternalResponse
{
    _Bool isApplicable_;
    JavaUtilOptional *populousConfigScope_;
    JavaUtilOptional *errorReason_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getErrorReason;
- (id)getPopulousConfigScope;
- (_Bool)getIsApplicable;

@end


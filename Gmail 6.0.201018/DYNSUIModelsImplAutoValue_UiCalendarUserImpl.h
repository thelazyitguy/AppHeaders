//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplUiCalendarUserImpl.h"

@class JavaUtilOptional, NSString;

@interface DYNSUIModelsImplAutoValue_UiCalendarUserImpl : DYNSUIModelsImplUiCalendarUserImpl
{
    NSString *email_;
    JavaUtilOptional *userId_;
    NSString *fullName_;
    NSString *firstName_;
    _Bool accountUser_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isAccountUser;
- (id)getFirstName;
- (id)getFullName;
- (id)getUserId;
- (id)getEmail;

@end

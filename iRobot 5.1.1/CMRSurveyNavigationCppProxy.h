//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/CMRSurveyNavigation-Protocol.h>

@class NSString;

@interface CMRSurveyNavigationCppProxy : NSObject <CMRSurveyNavigation>
{
    struct Handle<std::__1::shared_ptr<core::SurveyNavigation>, std::__1::shared_ptr<core::SurveyNavigation>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const shared_ptr_6fa0a695 *)cppRef;
- (id)initWithCpp:(const shared_ptr_6fa0a695 *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


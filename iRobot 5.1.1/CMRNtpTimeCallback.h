//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRNtpTimeCallback : NSObject
{
    struct Handle<std::__1::shared_ptr<core::NtpTimeCallback>, std::__1::shared_ptr<core::NtpTimeCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNtpTimeError;
- (void)onNtpTimeReceived:(id)arg1;
- (const shared_ptr_00aad0fd *)cppRef;
- (id)initWithCpp:(const shared_ptr_00aad0fd *)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRError : NSObject
{
    struct Handle<std::__1::shared_ptr<core::Error>, std::__1::shared_ptr<core::Error>> _cppRefHandle;
}

+ (id)createInfoMap:(id)arg1;
+ (id)create:(int)arg1 message:(id)arg2 info:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)info;
- (id)message;
- (int)code;
- (const shared_ptr_59c1c957 *)cppRef;
- (id)initWithCpp:(const shared_ptr_59c1c957 *)arg1;

@end

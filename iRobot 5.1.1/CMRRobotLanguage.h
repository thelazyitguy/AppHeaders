//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRRobotLanguage : NSObject
{
    struct Handle<std::__1::shared_ptr<core::RobotLanguage>, std::__1::shared_ptr<core::RobotLanguage>> _cppRefHandle;
}

+ (id)create:(int)arg1 name:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)equals:(id)arg1;
- (id)getName;
- (int)getId;
- (const shared_ptr_a287fa18 *)cppRef;
- (id)initWithCpp:(const shared_ptr_a287fa18 *)arg1;

@end


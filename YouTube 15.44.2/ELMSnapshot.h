//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMSnapshot : NSObject
{
    struct Handle<std::__1::shared_ptr<youtube::elements::interfaces::Snapshot>, std::__1::shared_ptr<youtube::elements::interfaces::Snapshot>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)keys;
- (_Bool)equals:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)findNoCopy:(id)arg1;
- (id)find:(id)arg1;
- (long long)size;
- (_Bool)empty;
- (id)initWithCpp:(const shared_ptr_b78a4074 *)arg1;

@end


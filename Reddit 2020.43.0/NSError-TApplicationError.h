//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (TApplicationError)
+ (id)read:(id)arg1;
+ (id)errorWithType:(int)arg1 reason:(id)arg2;
- (_Bool)write:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *reason;
@end


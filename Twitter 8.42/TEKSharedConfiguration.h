//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface TEKSharedConfiguration : NSObject
{
    NSString *_applicationGroupName;
    NSUserDefaults *_groupDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *groupDefaults; // @synthesize groupDefaults=_groupDefaults;
- (long long)shortURLLengthSecure;
- (id)initWithApplicationGroupName:(id)arg1;

@end


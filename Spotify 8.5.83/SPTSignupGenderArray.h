//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTSignupGenderArray : NSObject
{
    NSArray *_genders;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *genders; // @synthesize genders=_genders;
- (id)gendersWithNonBinaryGenderEnabled:(_Bool)arg1;
- (id)genderModelAtIndex:(long long)arg1;
- (long long)indexForGender:(unsigned long long)arg1;
- (unsigned long long)genderAtIndex:(long long)arg1;
- (id)localizedNameAtIndex:(long long)arg1;
- (unsigned long long)count;
- (id)initWithNonBinaryGenderEnabled:(_Bool)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (RedditFoundation)
+ (id)stringByRepeatingString:(id)arg1 times:(long long)arg2 joinedBy:(id)arg3;
+ (id)negativeStringWithNumber:(id)arg1;
+ (id)shortenedStringWithNumber:(double)arg1 unitSuffix:(id)arg2;
+ (id)friendlyStringWithNumber:(long long)arg1;
- (_Bool)containsOnlyCharactersInSet:(id)arg1;
- (_Bool)containsAnyCharactersInSet:(id)arg1;
@property(readonly, nonatomic) struct _NSRange entireRange;
@property(nonatomic, readonly) long long base36ValueAsBase10;
@property(nonatomic, readonly) NSString *base36Value;
@end

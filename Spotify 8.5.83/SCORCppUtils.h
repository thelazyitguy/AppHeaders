//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCORCppUtils : NSObject
{
}

+ (id)toNSString:(struct String)arg1;
+ (struct String)toJuceString:(id)arg1;
+ (id)toString:(id)arg1;
+ (id)valuesToString:(id)arg1;
+ (struct StringArray)StringArrayFromNSArray:(id)arg1;
+ (id)NSArrayFromStringArray:(const struct StringArray *)arg1;
+ (id)NSMutableDictionaryFromStringPairArray:(const struct StringPairArray *)arg1;
+ (id)NSDictionaryFromStringPairArray:(const struct StringPairArray *)arg1;
+ (struct StringPairArray)StringPairArrayFromNSDictionary:(id)arg1;

@end


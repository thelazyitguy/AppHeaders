//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSDictionary;

@protocol YTGPBDictionary <NSObject>
+ (id)yt_dictionaryWithDictionary:(NSDictionary *)arg1;
- (void)yt_setValue:(id)arg1 forKey:(id)arg2;
- (void)yt_enumerateKeysAndValuesUsingBlock:(void (^)(id, id, _Bool *))arg1;
- (NSDictionary *)yt_dictionary;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SRWebSocket)
+ (id)stringForStdString:(const basic_string_a490aa4c *)arg1;
+ (basic_string_a490aa4c)stdStringForString:(id)arg1;
- (id)stringBySHA1ThenBase64Encoding;
@property(readonly, nonatomic) basic_string_a490aa4c stdString;
@end

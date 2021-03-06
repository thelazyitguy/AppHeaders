//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePlatform/NSObject-Protocol.h>

@class CMRLocalizedStringDescriptor, NSData, NSString;

@protocol CMRResourceHandler <NSObject>
- (NSString *)localize:(CMRLocalizedStringDescriptor *)arg1;
- (NSData *)createTextImage:(NSString *)arg1 fontName:(NSString *)arg2 fontSize:(float)arg3 fillColor:(long long)arg4 strokeWidth:(float)arg5 strokeColor:(long long)arg6;
- (NSData *)loadResource:(NSString *)arg1 resourceType:(NSString *)arg2;
- (NSData *)loadImageResource:(long long)arg1;
@end


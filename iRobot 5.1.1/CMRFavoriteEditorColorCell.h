//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRFavoriteEditorColorCell : NSObject
{
    NSString *_hexValue;
    NSString *_colorName;
}

+ (id)FavoriteEditorColorCellWithHexValue:(id)arg1 colorName:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property(readonly, nonatomic) NSString *hexValue; // @synthesize hexValue=_hexValue;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithHexValue:(id)arg1 colorName:(id)arg2;

@end

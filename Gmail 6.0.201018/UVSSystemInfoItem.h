//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UILabel;

@interface UVSSystemInfoItem : NSObject
{
    UILabel *_nameLabel;
    UILabel *_valueLabel;
}

+ (id)createValueLabel:(id)arg1;
+ (id)createNameLabel:(id)arg1;
+ (id)itemWithName:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (id)initWithNameLabel:(id)arg1 valueLabel:(id)arg2;

@end

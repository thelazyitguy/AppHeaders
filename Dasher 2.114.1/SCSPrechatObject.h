//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceChat/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface SCSPrechatObject : NSObject <NSCopying>
{
    _Bool _displayToAgent;
    NSString *_label;
    NSString *_value;
    NSString *_displayLabel;
    NSMutableArray *_transcriptFields;
}

@property(nonatomic) _Bool displayToAgent; // @synthesize displayToAgent=_displayToAgent;
@property(retain, nonatomic) NSMutableArray *transcriptFields; // @synthesize transcriptFields=_transcriptFields;
@property(retain, nonatomic) NSString *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end


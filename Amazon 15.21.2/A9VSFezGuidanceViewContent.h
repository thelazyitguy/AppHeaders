//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface A9VSFezGuidanceViewContent : NSObject
{
    UIImage *_gifImage;
    NSString *_title1;
    NSString *_body1;
    NSString *_title2;
    NSString *_body2;
}

@property(readonly, nonatomic) NSString *body2; // @synthesize body2=_body2;
@property(readonly, nonatomic) NSString *title2; // @synthesize title2=_title2;
@property(readonly, nonatomic) NSString *body1; // @synthesize body1=_body1;
@property(readonly, nonatomic) NSString *title1; // @synthesize title1=_title1;
@property(readonly, nonatomic) UIImage *gifImage; // @synthesize gifImage=_gifImage;
- (void).cxx_destruct;
- (id)initWithGifImageName:(id)arg1 title1:(id)arg2 body1:(id)arg3 title2:(id)arg4 body2:(id)arg5;

@end

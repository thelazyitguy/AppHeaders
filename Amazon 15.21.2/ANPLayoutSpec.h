//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ANPLayoutSpec : NSObject
{
    double _width;
    double _height;
    double _x;
    double _y;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)description;
- (struct CGRect)layoutFrame;
- (id)initWithWidget:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKViewController.h>

@class EAGLContext;

@interface SNZVoiceWaveformViewController : GLKViewController
{
    _Bool _resolutionUniformSet;
    float _currentTime;
    unsigned int _programHandle;
    int _positionSlot;
    int _timeSlot;
    int _resolutionSlot;
    int _audioSlot;
    double _soundLevel;
    EAGLContext *_GLContext;
    double _startTime;
    double _scale;
    double _previousSoundLevel;
}

@property(nonatomic) double previousSoundLevel; // @synthesize previousSoundLevel=_previousSoundLevel;
@property(nonatomic) _Bool resolutionUniformSet; // @synthesize resolutionUniformSet=_resolutionUniformSet;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) int audioSlot; // @synthesize audioSlot=_audioSlot;
@property(nonatomic) int resolutionSlot; // @synthesize resolutionSlot=_resolutionSlot;
@property(nonatomic) int timeSlot; // @synthesize timeSlot=_timeSlot;
@property(nonatomic) int positionSlot; // @synthesize positionSlot=_positionSlot;
@property(nonatomic) unsigned int programHandle; // @synthesize programHandle=_programHandle;
@property(nonatomic) float currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) EAGLContext *GLContext; // @synthesize GLContext=_GLContext;
@property(nonatomic) double soundLevel; // @synthesize soundLevel=_soundLevel;
- (void).cxx_destruct;
- (void)setUpVBO;
- (void)compileShaders;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)update;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

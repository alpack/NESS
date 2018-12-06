// eslint-disable
// this is an auto generated file. This will be overwritten

<<<<<<< HEAD
export const onCreateHero = `subscription OnCreateHero {
  onCreateHero {
=======
export const onCreateUser = `subscription OnCreateUser {
  onCreateUser {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
<<<<<<< HEAD
    registered
    createdAt
    updatedAt
    image {
      bucket
      region
      key
    }
    isOnline
    level
    exp
    title
    race {
      RaceEnum
      description
    }
    lore
    skills {
      items {
        id
        name
        rank
        description
=======
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const onUpdateUser = `subscription OnUpdateUser {
  onUpdateUser {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
      nextToken
    }
    squads {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
    }
  }
}
`;
<<<<<<< HEAD
export const onUpdateHero = `subscription OnUpdateHero {
  onUpdateHero {
=======
export const onDeleteUser = `subscription OnDeleteUser {
  onDeleteUser {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
<<<<<<< HEAD
    registered
    createdAt
    updatedAt
    image {
      bucket
      region
      key
    }
    isOnline
    level
    exp
    title
    race {
      RaceEnum
      description
    }
    lore
    skills {
      items {
        id
        name
        rank
        description
=======
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
      nextToken
    }
    squads {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
    }
  }
}
`;
export const onDeleteHero = `subscription OnDeleteHero {
  onDeleteHero {
    id
<<<<<<< HEAD
    name
    owner
    registered
    createdAt
    updatedAt
=======
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    image {
      bucket
      region
      key
    }
    isOnline
<<<<<<< HEAD
=======
    honor
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    level
    exp
    title
    race {
      RaceEnum
      description
    }
    lore
    skills {
      items {
        id
        name
        rank
        description
      }
      nextToken
    }
    squads {
      id
<<<<<<< HEAD
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
      name
      rank
      description
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
export const onCreateSquad = `subscription OnCreateSquad {
  onCreateSquad {
    id
<<<<<<< HEAD
    owner
    name
    createdAt
    updatedAt
    isRecruiting
    heroes {
      items {
        id
        name
        owner
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
      }
      nextToken
    }
    quest {
      id
      name
      owner
      region
      createdAt
      updatedAt
      isTaken
      lore
      reward
      contact
=======
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
export const onUpdateSquad = `subscription OnUpdateSquad {
  onUpdateSquad {
    id
<<<<<<< HEAD
    owner
    name
    createdAt
    updatedAt
    isRecruiting
    heroes {
      items {
        id
        name
        owner
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
      }
      nextToken
    }
    quest {
=======
    user {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      id
      owner
<<<<<<< HEAD
      region
      createdAt
      updatedAt
      isTaken
      lore
      reward
      contact
=======
      name
      createdAt
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
export const onDeleteSquad = `subscription OnDeleteSquad {
  onDeleteSquad {
    id
    owner
    name
    createdAt
<<<<<<< HEAD
    updatedAt
    isRecruiting
    heroes {
      items {
        id
        name
        owner
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
      }
      nextToken
    }
    quest {
=======
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      id
      name
      owner
      region
      createdAt
      updatedAt
      isTaken
      lore
      reward
      contact
    }
  }
}
`;
export const onCreateQuest = `subscription OnCreateQuest {
  onCreateQuest {
    id
    name
    owner
    region
    createdAt
    updatedAt
    isTaken
    lore
    requirements {
      id
      name
      rank
      description
    }
<<<<<<< HEAD
    reward
    contact
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
  }
}
`;
export const onCreateSquad = `subscription OnCreateSquad {
  onCreateSquad {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const onUpdateQuest = `subscription OnUpdateQuest {
  onUpdateQuest {
    id
    name
    owner
    region
    createdAt
    updatedAt
    isTaken
    lore
    requirements {
      id
      name
      rank
      description
    }
    reward
    contact
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
export const onUpdateSquad = `subscription OnUpdateSquad {
  onUpdateSquad {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const onDeleteQuest = `subscription OnDeleteQuest {
  onDeleteQuest {
    id
    name
    owner
    region
    createdAt
    updatedAt
    isTaken
    lore
    requirements {
      id
      name
      rank
      description
    }
    reward
    contact
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
=======
export const onDeleteSquad = `subscription OnDeleteSquad {
  onDeleteSquad {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const onCreateSkill = `subscription OnCreateSkill {
  onCreateSkill {
=======
export const onCreateQuest = `subscription OnCreateQuest {
  onCreateQuest {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
<<<<<<< HEAD
    rank
    description
    hero {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      isOnline
      level
      exp
      title
      lore
=======
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const onUpdateSkill = `subscription OnUpdateSkill {
  onUpdateSkill {
=======
export const onUpdateQuest = `subscription OnUpdateQuest {
  onUpdateQuest {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
<<<<<<< HEAD
    rank
    description
    hero {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      isOnline
      level
      exp
      title
      lore
=======
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
<<<<<<< HEAD
export const onDeleteSkill = `subscription OnDeleteSkill {
  onDeleteSkill {
=======
export const onDeleteQuest = `subscription OnDeleteQuest {
  onDeleteQuest {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
<<<<<<< HEAD
    rank
    description
    hero {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      isOnline
      level
      exp
      title
      lore
=======
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
  }
}
`;
